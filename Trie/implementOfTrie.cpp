class Trie {
public:
    struct trieNode{
        bool isEnd;
        trieNode* child[26];
    };

    // NEW NODE CREATION
    trieNode* getNode(){
        trieNode* newNode = new trieNode();
        newNode->isEnd = false;

        for(int i=0;i<26;i++){
            newNode->child[i]= NULL;
        }

        return newNode;
    }

    trieNode * root;
    Trie() {
        root = getNode();
    }
    
    //INSERT IN TRIE DATA STRUCT
    void insert(string word) {
        trieNode* crawl = root;

        for(char ch :word){
            int id = ch - 'a';
            if(crawl->child[id] == NULL){
                crawl->child[id] = getNode();
            }
            crawl = crawl->child[id];

        }
        crawl->isEnd = true;
    }
    
    //SERACH FOR THE CHAR IN TRIE DATA STRUCT
    bool search(string word) {
        trieNode * crawl = root;
        for(char ch : word){
            int id = ch - 'a';

            if(crawl->child[id]==NULL){
                return false;
            }
            crawl = crawl->child[id]; 
        }
            
        if(crawl->isEnd == true && crawl != NULL) return true;

        return false;
    }
    
    //SEARCH WTH GIVEN PREFIX
    bool startsWith(string prefix) {
        trieNode * crawl = root;
        int i=0;
        for(char ch : prefix){
            int id = ch - 'a';
            i++;

            if(crawl->child[id]==NULL){
                return false;
            }
            crawl = crawl->child[id]; 
        }
        if(i == prefix.size()) return true; 

        return false;

    }
};
class Trie {
public:
    struct node{
        node*children[26]={NULL};
        bool isEnd=0;
    };
    node* root;
    Trie() {
        root=new node();
    }
    
    void insert(string word) {
        node*temp=root;
        for(char ch:word){
            int i=ch-'a';
            if(!temp->children[i])
            temp->children[i]=new node();
            temp=temp->children[i];
        }
        temp->isEnd=1;
    }
    node* walk(string s){
        node* temp = root;

        for (char ch : s) {
            int i = ch - 'a';

            if (!temp->children[i])
                return NULL;

            temp = temp->children[i];
        }

        return temp;
    }
    bool search(string word) {
        node* temp = walk(word);
        return temp != NULL && temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        return walk(prefix) != NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
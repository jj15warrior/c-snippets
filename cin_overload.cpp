// cin is slow, and using ios_base::sync_with_stdio(0); uses O(N) memory (and is still slower than this)
#define OFAST true
#if OFAST
    /*
    this code was developed by @jj15
    and should be taken into the free domain
    
    i am not responsible for disqualification from contests,
    although every usecase is permitted, and you can legally
    claim you have written this code yourself, some contests
    might automatically flag your submission. 
    */
    class Cin{
        public:
        Cin& operator>>(int &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(long long &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(unsigned int &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(unsigned long long &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(short &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(unsigned short &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(char &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(string &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(float &n){
            fastscan(n);
            return *this;
        }
        Cin& operator>>(double &n){
            fastscan(n);
            return *this;
        }
        private:
        void fastscan(int &number){ 
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        }
        void fastscan(long long &number){ 
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        }
        void fastscan(unsigned int &number){
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        } 
        void fastscan(unsigned long long &number){
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        } 
        void fastscan(short &number){ 
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        }
        void fastscan(unsigned short &number){ 
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
        
            if (negative) 
                number *= -1; 
        } 
        void fastscan(char &number){
            number = getchar();
        }
        void fastscan(string number){
            char c;
            for(;;c=getchar()){
                if(c!=' ' && c!='\n' && c!='\t' && c!='\r'){
                    number+=c;
                }
            }
        }
        void fastscan(float &number){
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
            if(c=='.'){
                float dec=0;
                int i=1;
                for(;(c>47 && c<58);c=getchar()){
                    dec=dec*10+c-48;
                    i*=10;
                }
                number+=dec/i;
            }
            if (negative) 
                number *= -1; 
        }
        void fastscan(double &number){
            bool negative = false; 
            int c; 
            number = 0; 
            c = getchar(); 
            if (c=='-') 
            { 
                negative = true; 
                c = getchar(); 
            } 
        
            for (; (c>47 && c<58); c=getchar()) 
                number = number *10 + c - 48; 
            if(c=='.'){
                float dec=0;
                int i=1;
                for(;(c>47 && c<58);c=getchar()){
                    dec=dec*10+c-48;
                    i*=10;
                }
                number+=dec/i;
            }
            if (negative) 
                number *= -1; 
        }
    };
    Cin cin_overload;
    #define cin cin_overload
#endif

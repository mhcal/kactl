let mapleader = " "
set ignorecase
set number
set relativenumber
syntax on
set mouse=a
set autoindent
augroup cpp
  autocmd!
  autocmd FileType c,cpp setlocal et ts=4 sw=4 sts=4
  autocmd FileType cpp setlocal commentstring=//\ %s
  autocmd FileType cpp nnoremap <buffer> <F9> :w<CR>:make<CR>
augroup END
filetype plugin indent on
set hidden
set noswapfile
set nobackup
set nowritebackup
set updatetime=750
set autoread
set cmdheight=1
set scrolloff=10
set signcolumn=yes
set laststatus=2
set incsearch
set hlsearch
set ignorecase
set smartcase
set smartindent
set cindent
set cinoptions=g0,N-s,j1,(s
nnoremap <leader><space> :noh<CR>
nnoremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l
nnoremap <F7> :!time ./%:r < in.txt<CR>
inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap ( ()<Left>
inoremap [ []<Left>
nnoremap <leader>t :read ~/.vim/templates/icpc.cpp<CR>
vnoremap <leader>/ :s/^/\/\//<CR>:noh<CR>
vnoremap <leader>? :s/^\/\///<CR>:noh<CR>
nnoremap <C-p> :find *
set matchpairs+=<:>
if exists('&matchtime')
  set matchtime=2
endif

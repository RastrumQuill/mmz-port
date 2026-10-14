// sub_08015D94 at 0x08015D94 (thumb)

bool sub_08015D94(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = 1 < *(byte *)(param_1 + 0xc);
  }
  return bVar1;
}


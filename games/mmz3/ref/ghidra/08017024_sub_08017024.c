// sub_08017024 at 0x08017024 (thumb)

undefined4 sub_08017024(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080070C0();
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == param_1 + 0x14) break;
    bVar1 = *(byte *)(iVar2 + 10);
    if ((bVar1 & 4) != 0) {
      iVar3 = iVar2 + 0x74;
      if ((bVar1 & 2) == 0) {
        sub_08007418(iVar3);
      }
      else if ((bVar1 & 0x40) == 0) {
        sub_080074D8(iVar3,(bVar1 & 0x30) >> 4);
      }
      else {
        sub_080075E0(iVar3,(bVar1 & 0x30) >> 4,*(undefined *)(iVar2 + 0x24));
      }
    }
  }
  return in_lr;
}


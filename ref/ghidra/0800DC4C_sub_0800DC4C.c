// sub_0800DC4C at 0x0800DC4C (thumb)

undefined4 sub_0800DC4C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08005410();
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == param_1 + 0x14) break;
    bVar1 = *(byte *)(iVar2 + 10);
    if ((bVar1 & 4) != 0) {
      iVar3 = iVar2 + 0x74;
      if ((bVar1 & 2) == 0) {
        sub_08005678(iVar3);
      }
      else if ((bVar1 & 0x40) == 0) {
        sub_080056D4(iVar3,(bVar1 & 0x30) >> 4);
      }
      else {
        sub_080057E4(iVar3,(bVar1 & 0x30) >> 4,*(undefined *)(iVar2 + 0x1f));
      }
    }
  }
  return in_lr;
}


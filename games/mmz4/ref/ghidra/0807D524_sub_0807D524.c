// sub_0807D524 at 0x0807D524 (thumb)

undefined4 sub_0807D524(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_08128B5C(auStack_c,&DAT_0812934a,2);
  bVar1 = *(byte *)(param_1 + 0xbf);
  if ((bVar1 >> 1 & 1) == 0) {
    bVar1 = bVar1 | 2;
  }
  else {
    bVar1 = bVar1 & 0xfd;
  }
  *(byte *)(param_1 + 0xbf) = bVar1;
  *(undefined *)(param_1 + 0xd) = auStack_c[*(byte *)(param_1 + 0xbf) >> 1 & 1];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


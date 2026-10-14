// sub_0805C238 at 0x0805C238 (thumb)

undefined4 sub_0805C238(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  int local_24;
  undefined4 local_20;
  
  sub_08128B5C(auStack_2c,&DAT_0812900c,3);
  sub_08128B5C(auStack_28,&DAT_0812900f,3);
  bVar1 = *(byte *)(param_1 + 10);
  iVar2 = *(byte *)(param_1 + 0xce) - 1;
  if (iVar2 < 1) {
    iVar2 = sub_0805C2F0(auStack_28,3);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    sub_080DFFC8(&local_24,auStack_2c[iVar2],bVar1 >> 4 & 1);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    iVar2 = (uVar3 * 2 >> 0x11 & 7) + 8;
  }
  *(byte *)(param_1 + 0xce) = (byte)iVar2;
  return in_lr;
}


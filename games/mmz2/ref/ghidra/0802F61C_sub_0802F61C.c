// sub_0802F61C at 0x0802F61C (thumb)

undefined4 sub_0802F61C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x2b9);
  iVar2 = uVar3 - 1;
  *(byte *)(param_1 + 0x2b9) = (byte)iVar2;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 5;
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = (byte)iVar2;
    sub_0801E9FC(param_1,0x5b);
  }
  uVar1 = sub_08035ED0(param_1,*(undefined *)(param_1 + 0x17f),2,*(undefined *)(param_1 + 0x177));
  sub_0803609C(param_1,uVar1);
  sub_08035FB4(param_1,0,iVar2,uVar3);
  return in_lr;
}


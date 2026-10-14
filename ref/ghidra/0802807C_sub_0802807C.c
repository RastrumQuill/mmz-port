// sub_0802807C at 0x0802807C (thumb)

undefined4 sub_0802807C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar2 = *(undefined *)(param_1 + 0x11);
  uVar3 = *(undefined *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x24) = 0;
  for (uVar5 = (uint)(byte)(&DAT_082ac548)[bVar1]; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar4 = sub_080054C0(param_1);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 0x1e) = 1;
      *(undefined *)(iVar4 + 9) = 2;
      *(undefined4 *)(iVar4 + 0x14) = 0x80276c9;
      *(byte *)(iVar4 + 0x10) = bVar1;
      *(undefined *)(iVar4 + 0x11) = uVar2;
      *(undefined *)(iVar4 + 0x54) = uVar3;
      *(char *)(iVar4 + 0x12) = (char)uVar5;
      *(int *)(iVar4 + 0x20) = param_1;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(int *)(param_1 + 0x24) = iVar4;
      param_1 = iVar4;
    }
  }
  return in_lr;
}


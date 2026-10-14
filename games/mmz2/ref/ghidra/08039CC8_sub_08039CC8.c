// sub_08039CC8 at 0x08039CC8 (thumb)

undefined4 sub_08039CC8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0803A174(param_1,iVar3);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar2 = *(undefined *)(param_1 + 0x12);
  iVar5 = *(int *)(iVar3 + 0x2c4);
  iVar4 = sub_080EF150((uint)bVar1 * (*(int *)(iVar3 + 0x2d4) - iVar5),uVar2);
  *(int *)(param_1 + 0x54) = iVar5 + iVar4;
  iVar5 = *(int *)(iVar3 + 0x2c8);
  iVar4 = sub_080EF150((uint)bVar1 * (*(int *)(iVar3 + 0x2d8) - iVar5),uVar2);
  *(int *)(param_1 + 0x58) = iVar5 + iVar4;
  sub_0803A17C(param_1,iVar3);
  sub_08012A14(param_1);
  return in_lr;
}


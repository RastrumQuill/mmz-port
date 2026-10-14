// sub_080E95C0 at 0x080E95C0 (thumb)

undefined4 sub_080E95C0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0xee0;
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 0x1ffff;
  }
  if (iVar4 != (iVar2 >> 0x11) * 0x20000) {
    iVar3 = 0x16e0;
  }
  iVar3 = *(int *)(param_1 + 0xc) + iVar3;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002638(&DAT_08390e64,(DAT_02000f96 & 0xc) << 0xc);
    sub_08002AEC(&DAT_08390e70,0);
    sub_08002638(&DAT_083914cc,(DAT_02000f96 & 0xc) * 0x1000);
    sub_08002AEC(&DAT_083914d8,0);
    sub_080EEF68(&DAT_0836e6e8,iVar3,0x140);
    cVar5 = *(char *)(iVar1 + 0x1fc) + 't';
    sub_08002D68(cVar5,0);
    sub_08002EF0(cVar5);
  }
  else {
    sub_080EEF68(&DAT_0836dcd8,iVar3,0x140);
  }
  *(int *)(param_1 + 0x18) = iVar3;
  sub_080E96DC(param_1);
  sub_080E982C(param_1);
  sub_080E98C8(param_1);
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080E9930(param_1);
  }
  sub_080E9AD4(param_1);
  sub_080E9B8C(param_1);
  return in_lr;
}


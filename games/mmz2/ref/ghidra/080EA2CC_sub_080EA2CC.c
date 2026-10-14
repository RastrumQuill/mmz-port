// sub_080EA2CC at 0x080EA2CC (thumb)

undefined8 sub_080EA2CC(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar5 = (uint)*(byte *)(iVar3 + 500);
  bVar1 = (byte)DAT_02000d14;
  if (((DAT_02000d14 & 0xc0) == 0) && ((DAT_02000d14 & 0x30) != 0)) {
    iVar4 = 1;
    if ((DAT_02000d14 & 0x20) != 0) {
      iVar4 = -1;
    }
    uVar5 = sub_080EF1E8(uVar5 + iVar4 + 3,3);
    *(char *)(iVar3 + 500) = (char)uVar5;
    *(byte *)(param_1 + 5) = bVar1 & 0xc0;
    sub_080032EC(1);
  }
  cVar2 = sub_080EF11C(param_1,(int)param_2,*(undefined4 *)(&DAT_0835e888 + uVar5 * 4));
  return CONCAT44(in_lr,(int)cVar2);
}


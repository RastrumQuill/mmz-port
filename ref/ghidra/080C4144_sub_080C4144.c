// sub_080C4144 at 0x080C4144 (thumb)

undefined8 sub_080C4144(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar5 = (uint)*(byte *)(iVar3 + 0x218);
  bVar1 = (byte)DAT_02004ca8;
  if (((DAT_02004ca8 & 0xc0) == 0) && ((DAT_02004ca8 & 0x30) != 0)) {
    iVar4 = 1;
    if ((DAT_02004ca8 & 0x20) != 0) {
      iVar4 = -1;
    }
    uVar5 = sub_080C8B68(uVar5 + iVar4 + 3,3);
    *(char *)(iVar3 + 0x218) = (char)uVar5;
    *(byte *)(param_1 + 5) = bVar1 & 0xc0;
    sub_08001EAC(0x29);
  }
  cVar2 = sub_080C8A9C(param_1,(int)param_2,*(undefined4 *)(&DAT_082cc2f4 + uVar5 * 4));
  return CONCAT44(in_lr,(int)cVar2);
}


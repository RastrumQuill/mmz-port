// sub_0801B748 at 0x0801B748 (thumb)

undefined8 sub_0801B748(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x188) & 2) != 0) {
    bVar1 = sub_0801B50C(param_1,0);
    if ((bVar1 & *(byte *)(param_1 + 0x12d)) == 0) {
      iVar4 = sub_080186D8(param_1);
      iVar5 = sub_080186EC(param_1);
      bVar1 = bVar1 & ~*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      if ((bVar1 & 0x10) != 0) {
        uVar6 = sub_0801C404(param_1,0,0);
        if ((*(char *)(param_1 + 0x194) != '\0') && (iVar5 <= (int)(uVar6 & 0xff)))
        goto LAB_0801b814;
        if (iVar4 <= (int)(uVar6 & 0xff)) goto LAB_0801b7a0;
      }
      if ((bVar1 & 0x80) != 0) {
        uVar6 = sub_0801C404(param_1,0,1);
        if ((*(char *)(param_1 + 0x194) != '\0') && (iVar5 <= (int)(uVar6 & 0xff)))
        goto LAB_0801b814;
        if (iVar4 <= (int)(uVar6 & 0xff)) goto LAB_0801b7a0;
      }
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      cVar2 = sub_0801B9FC(param_1,0,1);
      if (cVar2 != '\0') {
LAB_0801b814:
        uVar3 = 2;
        goto LAB_0801b81e;
      }
      cVar2 = sub_0801B9FC(param_1,0,0);
      if (cVar2 != '\0') {
LAB_0801b7a0:
        uVar3 = 1;
        goto LAB_0801b81e;
      }
    }
  }
  uVar3 = 0;
LAB_0801b81e:
  return CONCAT44(in_lr,uVar3);
}


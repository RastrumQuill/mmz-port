// sub_0801B8C8 at 0x0801B8C8 (thumb)

undefined8 sub_0801B8C8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = sub_0801B50C(param_1,2);
  if ((bVar1 & *(byte *)(param_1 + 0x12d)) == 0) {
    if (2 < *(byte *)(param_1 + 0x196)) {
      iVar4 = sub_0801872C(param_1);
      bVar1 = bVar1 & ~*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      if ((((bVar1 & 0x10) != 0) &&
          (uVar5 = sub_0801C404(param_1,2,0), iVar4 <= (int)(uVar5 & 0xff))) ||
         (((bVar1 & 0x80) != 0 && (uVar5 = sub_0801C404(param_1,2,1), iVar4 <= (int)(uVar5 & 0xff)))
         )) goto LAB_0801b8fa;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (cVar2 = sub_0801B9FC(param_1,2,3), cVar2 != '\0')) {
LAB_0801b8fa:
    uVar3 = 1;
    goto LAB_0801b962;
  }
  uVar3 = 0;
LAB_0801b962:
  return CONCAT44(in_lr,uVar3);
}


// sub_080EAD60 at 0x080EAD60 (thumb)

undefined8 sub_080EAD60(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (0 < param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 4);
    uVar4 = uVar3;
    if ((DAT_02000d14 & 0xd1) != 0) {
      if ((DAT_02000d14 & 0x11) == 0) {
        cVar1 = sub_080D5C94(*(undefined4 *)(param_1 + 0x10),uVar3);
        uVar4 = (uint)cVar1;
        if (uVar4 != uVar3) {
          *(undefined2 *)(param_1 + 2) = 2;
          *(char *)(param_1 + 4) = cVar1;
          sub_080032EC(1);
          cVar1 = sub_080EADE8(param_1,(int)param_2);
          iVar2 = (int)cVar1;
          goto LAB_080eade2;
        }
      }
      else {
        cVar1 = sub_080D5830(*(undefined4 *)(param_1 + 0x10),0,uVar3);
        if (cVar1 != '\0') {
          iVar2 = 1;
          *(undefined *)(param_1 + 1) = 1;
          *(undefined2 *)(param_1 + 2) = 0;
          goto LAB_080eade2;
        }
        sub_080032EC(4);
      }
    }
    sub_080EB070(uVar4 & 0xff);
  }
  iVar2 = 0;
LAB_080eade2:
  return CONCAT44(in_lr,iVar2);
}


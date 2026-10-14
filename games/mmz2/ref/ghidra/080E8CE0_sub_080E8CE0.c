// sub_080E8CE0 at 0x080E8CE0 (thumb)

undefined8 sub_080E8CE0(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (0 < param_2) {
    uVar6 = (uint)*(byte *)(param_1 + 5);
    iVar5 = *(int *)(param_1 + 0x10);
    uVar4 = uVar6;
    if ((DAT_02000d14 & 3) == 0) {
      if ((DAT_02000d14 & 0x30) != 0) {
        iVar7 = 1;
        if ((DAT_02000d14 & 0x20) != 0) {
          iVar7 = -1;
        }
        do {
          uVar4 = sub_080EF1E8(uVar4 + iVar7 + 3,3);
        } while (*(char *)(iVar5 + 0x20a + uVar4) == '\0');
        if (uVar4 != uVar6) {
          sub_080032EC(1);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else if ((DAT_02000d14 & 2) == 0) {
      bVar1 = *(byte *)(iVar5 + 0x20a + uVar6);
      uVar6 = (uint)bVar1;
      if ((((int)(uint)*(byte *)(iVar5 + 0x23e + (uint)(bVar1 >> 3)) >> (uVar6 & 7) & 1U) == 0) &&
         ((uVar3 = sub_080D60F8(iVar5,uVar6,0), (uVar3 & 0x80) != 0 ||
          (cVar2 = sub_080D5718(iVar5), cVar2 != '\x03')))) {
        *(undefined2 *)(param_1 + 2) = 2;
        sub_080D6260(iVar5,uVar6);
        sub_080D6138(iVar5,uVar6);
        sub_080032EC(0x23);
        cVar2 = sub_080E8E0C(param_1,(int)param_2);
        iVar5 = (int)cVar2;
        goto LAB_080e8df8;
      }
      sub_080032EC(4);
    }
    else {
      sub_080032EC(3);
      *(undefined *)(param_1 + 1) = 0;
    }
    sub_080E9DC8(*(undefined *)(iVar5 + 0x20a + uVar4));
  }
  iVar5 = 1;
LAB_080e8df8:
  return CONCAT44(in_lr,iVar5);
}


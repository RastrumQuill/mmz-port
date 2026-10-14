// sub_080C35B4 at 0x080C35B4 (thumb)

undefined8 sub_080C35B4(int param_1,char param_2)

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
    if ((DAT_02004ca8 & 3) == 0) {
      if ((DAT_02004ca8 & 0x30) != 0) {
        iVar7 = 1;
        if ((DAT_02004ca8 & 0x20) != 0) {
          iVar7 = -1;
        }
        do {
          uVar4 = sub_080C8B68(uVar4 + iVar7 + 3,3);
        } while (*(char *)(iVar5 + 0x180 + uVar4) == '\0');
        if (uVar4 != uVar6) {
          sub_08001EAC(0x29);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else if ((DAT_02004ca8 & 2) == 0) {
      bVar1 = *(byte *)(iVar5 + 0x180 + uVar6);
      uVar6 = (uint)bVar1;
      if ((((int)(uint)*(byte *)(iVar5 + 0x1b8 + (uint)(bVar1 >> 3)) >> (uVar6 & 7) & 1U) == 0) &&
         ((uVar3 = sub_080B4E14(iVar5,uVar6,0), (uVar3 & 0x80) != 0 ||
          (cVar2 = sub_080B44B0(iVar5), cVar2 != '\x03')))) {
        *(undefined2 *)(param_1 + 2) = 2;
        sub_080B4F40(iVar5,uVar6);
        *(char *)(iVar5 + 0x201) = *(char *)(iVar5 + 0x201) + '\x01';
        sub_080B4E58(iVar5,uVar6);
        sub_08001EAC(0x59);
        cVar2 = sub_080C36E4(param_1,(int)param_2);
        iVar5 = (int)cVar2;
        goto LAB_080c36d6;
      }
      sub_08001EAC(0xc1);
    }
    else {
      sub_08001EAC(0x28);
      *(undefined *)(param_1 + 1) = 0;
    }
    sub_080C4080(*(undefined *)(iVar5 + 0x180 + uVar4));
  }
  iVar5 = 1;
LAB_080c36d6:
  return CONCAT44(in_lr,iVar5);
}


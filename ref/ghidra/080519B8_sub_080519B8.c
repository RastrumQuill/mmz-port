// sub_080519B8 at 0x080519B8 (thumb)

undefined4 sub_080519B8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080519d2_caseD_1:
    if ((*(int *)(param_1 + 0x20) == 0) || (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2)) {
LAB_08051aa6:
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
LAB_08051aec:
      *(byte *)(param_1 + 10) = bVar1 & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      *(undefined *)(param_1 + 0xd) = 0;
    }
switchD_080519d2_caseD_6:
    return in_lr;
  case 1:
    goto switchD_080519d2_caseD_1;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082af4c4,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8051661;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x20);
    if ((iVar4 == 0) || (*(byte *)(iVar4 + 0xc) < 2)) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0xb8);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0xbc);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      if (*(char *)(param_1 + 0x73) != '\x04') {
        return in_lr;
      }
      goto LAB_08051aa6;
    }
LAB_08051ae6:
    bVar1 = *(byte *)(param_1 + 10);
    goto LAB_08051aec;
  case 4:
    sub_080033F0(param_1 + 0x6c,1);
    sub_08001EAC(0xb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar4 = *(int *)(param_1 + 0x20);
    if ((iVar4 == 0) || (*(byte *)(iVar4 + 0xc) < 2)) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0xb8);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0xbc);
      iVar4 = param_1 + 0x6c;
      sub_08003458(iVar4);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_080033F0(iVar4,2);
      sub_08003458(iVar4);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 1;
      *(undefined *)(param_1 + 0xe) = 3;
      return in_lr;
    }
    goto LAB_08051ae6;
  default:
    goto switchD_080519d2_caseD_6;
  }
}


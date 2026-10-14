// sub_080553A4 at 0x080553A4 (thumb)

undefined4 sub_080553A4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x44);
  }
  if ((((*puVar3 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar3 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    sub_080591E8(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) goto switchD_08055454_caseD_1;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = sub_0802AD94(10,param_1,&DAT_088552b0);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 == 0) goto LAB_0805549e;
    switch(*(undefined *)(param_1 + 0xd)) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
switchD_08055454_caseD_0:
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      break;
    case 5:
      if (*(char *)(param_1 + 0xe) != '\x06') goto switchD_08055454_caseD_0;
    }
switchD_08055454_caseD_1:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0805549e;
  }
  iVar2 = sub_0802B3CC();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0805549e:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08854e4c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_0805972C(param_1);
  return in_lr;
}


// sub_080689BC at 0x080689BC (thumb)

undefined4 sub_080689BC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x16;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    break;
  case 2:
    sub_0800471C(0x103);
    sub_08017700(param_1,0x805);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined *)(param_1 + 0x12) = 0x16;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb9) = 1;
    sub_08007390(param_1 + 0x74,&DAT_0836296c);
    goto LAB_08068b0e;
  case 4:
  case 8:
    goto switchD_080689d2_caseD_4;
  case 5:
    sub_08017700(param_1,0x806);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      local_18 = *(undefined4 *)(param_1 + 0x58);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_1c = *(int *)(param_1 + 0x54) + -0x1800;
        uVar4 = 0;
      }
      else {
        local_1c = *(int *)(param_1 + 0x54) + 0x1800;
        uVar4 = 0x80;
      }
      sub_0809C41C(&local_1c,0x280,uVar4);
      sub_080B2484(3,&local_1c);
      sub_0800471C(0x2c);
      *(undefined *)(param_1 + 0x12) = 8;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    sub_080177F4(param_1);
    uVar3 = (uint)*(byte *)(param_1 + 0x13);
    goto LAB_08068b0a;
  case 7:
    *(undefined *)(param_1 + 0x12) = 0x16;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto switchD_080689d2_caseD_4;
  case 9:
    sub_0800471C(0x103);
    sub_08017700(param_1,0x807);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xb9) = 0;
      sub_08007390(param_1 + 0x74,&DAT_0836290c);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080689d2_caseD_b;
  }
switchD_080689d2_caseD_1:
  if (*(byte *)(param_1 + 0x12) != 0) {
    iVar2 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    uVar3 = iVar2 * 0x1000000;
LAB_08068b0a:
    if (uVar3 == 0) {
LAB_08068b0e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
switchD_080689d2_caseD_b:
  return in_lr;
switchD_080689d2_caseD_4:
  sub_080177F4(param_1);
  goto switchD_080689d2_caseD_1;
}


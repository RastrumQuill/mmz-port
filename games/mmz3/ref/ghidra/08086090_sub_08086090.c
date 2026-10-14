// sub_08086090 at 0x08086090 (thumb)

undefined4 sub_08086090(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6903);
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364cfc);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10200) {
      sub_08007390(param_1 + 0x74,&DAT_08364d14);
    }
LAB_08086116:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0808622c;
  case 2:
    sub_08017700(param_1,0x6900);
    *(undefined *)(param_1 + 0xb9) = 1;
    uVar1 = 0x10;
    break;
  case 3:
  case 7:
  case 9:
    goto switchD_080860a6_caseD_3;
  case 4:
    sub_08017700(param_1,0x6905);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
      local_10 = *(int *)(param_1 + 0x54) + -0x800;
      local_c = *(int *)(param_1 + 0x58) + -0xe00;
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      sub_080ACA84(&local_10,&local_10,uVar3 * 2 >> 0x11 & 1);
      *(undefined *)(param_1 + 0x12) = 1;
    }
    goto LAB_08086116;
  case 6:
    uVar1 = 0x12;
    break;
  case 8:
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      sub_08017700(param_1,0x6902);
    }
    else {
      sub_08017700(param_1,0x6901);
    }
    uVar1 = 0x40;
    break;
  case 10:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_080860a6_caseD_b;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080860a6_caseD_3:
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
LAB_0808622c:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080860a6_caseD_b:
  return in_lr;
}


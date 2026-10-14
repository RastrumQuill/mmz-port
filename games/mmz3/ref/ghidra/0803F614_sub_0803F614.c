// sub_0803F614 at 0x0803F614 (thumb)

undefined4 sub_0803F614(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 6U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803f628_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803f73e:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0803f628_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0803f628_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835e4a8);
    uVar2 = sub_080404B8(param_1);
    *(undefined4 *)(param_1 + 0xcc) = uVar2;
    sub_0800471C(0x70);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(int *)(param_1 + 0xc4) == 0)) {
      sub_080177CC(param_1,*(short *)(param_1 + 200) + 6U | 0xa200,4,0);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    sub_080177F4(param_1);
    if (*(byte *)(*(int *)(param_1 + 0xcc) + 0xc) < 2) {
      return in_lr;
    }
    *(int *)(param_1 + 0xcc) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803f73e;
  case 4:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 7U | 0xa200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0803f73e;
  default:
    goto switchD_0803f628_caseD_6;
  }
}


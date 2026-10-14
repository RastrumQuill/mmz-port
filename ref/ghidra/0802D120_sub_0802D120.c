// sub_0802D120 at 0x0802D120 (thumb)

undefined4 sub_0802D120(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    sub_08029778(param_1,0x13);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    sub_080297C0(param_1);
    break;
  case 2:
    uVar1 = sub_08099F90(param_1,&DAT_082acfa8);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      sub_08015698(10,param_1 + 0x4c);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  return in_lr;
}


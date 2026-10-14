// sub_08025EEC at 0x08025EEC (thumb)

undefined4 sub_08025EEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x60) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(byte *)(param_1 + 0x176) < 3) {
    cVar1 = *(char *)(param_1 + 0x17f);
    if (cVar1 == '\t') {
      sub_0801E9FC(param_1,10);
    }
    else if (cVar1 == '\f') {
      sub_0801E9FC(param_1,0xd);
    }
    else if (cVar1 != '\x06') {
      sub_0801E9FC(param_1,6);
    }
  }
  if ((*(char *)(param_1 + 0xe) == '\x02') && (*(char *)(param_1 + 0xf) == '\0')) {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_08025F54(param_1);
  }
  return in_lr;
}


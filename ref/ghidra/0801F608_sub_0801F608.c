// sub_0801F608 at 0x0801F608 (thumb)

undefined4 sub_0801F608(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x58) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(byte *)(param_1 + 0xbe) < 3) {
    cVar1 = *(char *)(param_1 + 0x115);
    if (cVar1 == '\t') {
      sub_08018BE8(param_1,10);
    }
    else if (cVar1 == '\f') {
      sub_08018BE8(param_1,0xd);
    }
    else if (cVar1 != '\x06') {
      sub_08018BE8(param_1,6);
    }
  }
  if ((*(char *)(param_1 + 0xe) == '\x02') && (*(char *)(param_1 + 0xf) == '\0')) {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_0801F674(param_1);
  }
  return in_lr;
}


// sub_08024538 at 0x08024538 (thumb)

undefined4 sub_08024538(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0801B8C8();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x120) = 0;
    *(undefined *)(param_1 + 0x11f) = 0;
    sub_08018BE8(param_1,0x73);
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 5;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 1;
    *(undefined *)(param_1 + 0x11f) = 5;
    sub_08018BE8(param_1,0x79);
  }
  return in_lr;
}


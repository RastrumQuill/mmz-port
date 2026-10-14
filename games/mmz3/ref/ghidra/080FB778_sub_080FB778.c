// sub_080FB778 at 0x080FB778 (thumb)

undefined8 sub_080FB778(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xdcd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x1d);
        uVar3 = sub_080B5144(0);
        *(undefined4 *)(param_1 + 0xdd4) = uVar3;
        *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080fb7f2;
      if (1 < *(byte *)(*(int *)(param_1 + 0xdd4) + 0xc)) {
        *(char *)(param_1 + 0xdcc) = *(char *)(param_1 + 0xdcc) + '\x01';
        *(undefined *)(param_1 + 0xdcd) = 0;
        *(undefined *)(param_1 + 0xdce) = 0;
        *(undefined *)(param_1 + 0xdcf) = 0;
      }
      goto LAB_080fb7f2;
    }
    if (bVar1 != 0) goto LAB_080fb7f2;
    *(undefined *)(param_1 + 0xdff) = 0x3c;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0xdff) + -1;
  *(char *)(param_1 + 0xdff) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  }
LAB_080fb7f2:
  *(undefined2 *)(param_1 + 0xddc) = 0;
  *(undefined2 *)(param_1 + 0xdde) = 0;
  sub_080FB1B4(param_1);
  return CONCAT44(in_lr,1);
}


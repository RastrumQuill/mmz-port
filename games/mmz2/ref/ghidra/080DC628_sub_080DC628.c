// sub_080DC628 at 0x080DC628 (thumb)

undefined4 sub_080DC628(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080DCBC4();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = sub_080DC9F8(param_1);
    *(undefined *)(param_1 + 0x11) = uVar2;
    sub_080126A0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080DC660(param_1);
  }
  return in_lr;
}


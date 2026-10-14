// sub_080233DC at 0x080233DC (thumb)

undefined4 sub_080233DC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0801B390();
  if (-1 < cVar1) {
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_080234AC(param_1);
  }
  return in_lr;
}


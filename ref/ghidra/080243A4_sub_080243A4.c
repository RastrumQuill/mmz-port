// sub_080243A4 at 0x080243A4 (thumb)

undefined4 sub_080243A4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    sub_080243D8(param_1);
  }
  return in_lr;
}


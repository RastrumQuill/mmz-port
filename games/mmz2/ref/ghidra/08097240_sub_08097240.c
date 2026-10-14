// sub_08097240 at 0x08097240 (thumb)

undefined4 sub_08097240(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9c08);
    sub_08006E08(param_1 + 0x74,&DAT_08342f54);
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    }
    uVar1 = sub_080ABE84(param_1,0,0x9c05);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}


// sub_080C0080 at 0x080C0080 (thumb)

undefined4 sub_080C0080(int param_1)

{
  bool bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0x28) + 0xc1) = 0;
  }
  else if (*(char *)(*(int *)(*(int *)(param_1 + 0x28) + 0xb4 + (*(byte *)(param_1 + 0x10) + 3) * 4)
                    + 0xd) != '\0') goto LAB_080c00ac;
  bVar1 = true;
LAB_080c00ac:
  sub_080128D4(param_1);
  if ((bVar1) && ((*(byte *)(param_1 + 0x12) & 0x7f) == 0)) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
      sub_080127E4(param_1,0x1d13);
      sub_080128D4(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xbd) = uVar2;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * -0x20;
  }
  return in_lr;
}


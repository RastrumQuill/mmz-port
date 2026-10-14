// sub_0805F968 at 0x0805F968 (thumb)

undefined4 sub_0805F968(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    cVar1 = sub_080608EC(param_1);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xf) = 4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_08060768(param_1,0xd);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}


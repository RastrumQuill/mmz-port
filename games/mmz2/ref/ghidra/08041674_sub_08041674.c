// sub_08041674 at 0x08041674 (thumb)

undefined4 sub_08041674(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa200);
    if (*(char *)(param_1 + 0xbf) == '\0') {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 0x11;
    }
    *(undefined *)(param_1 + 0xc0) = uVar1;
    *(undefined *)(param_1 + 0xc2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x54) =
       *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbf) + 4) * 4) + 0x54);
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbf) + 4) * 4) + 0x58);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


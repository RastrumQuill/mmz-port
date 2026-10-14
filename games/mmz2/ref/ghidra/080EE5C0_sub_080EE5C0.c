// sub_080EE5C0 at 0x080EE5C0 (thumb)

undefined4 sub_080EE5C0(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 2);
  uVar3 = (uint)*(byte *)(param_1 + 3);
  if (uVar2 < uVar3) {
    if ((uVar3 << 0x18) >> 0x19 < uVar2) goto LAB_080ee5ec;
    *(undefined *)(param_1 + 0x1b) = 0xf0;
LAB_080ee5fa:
    uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar2;
    if (uVar2 < 0x10) goto LAB_080ee60c;
    uVar1 = 0xf;
  }
  else {
    if (uVar3 <= (uVar2 << 0x18) >> 0x19) {
      *(undefined *)(param_1 + 0x1b) = 0xf;
      goto LAB_080ee5fa;
    }
LAB_080ee5ec:
    *(undefined *)(param_1 + 0x1b) = 0xff;
    uVar1 = (undefined)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined *)(param_1 + 10) = uVar1;
LAB_080ee60c:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}


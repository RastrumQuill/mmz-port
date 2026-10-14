// sub_0803C198 at 0x0803C198 (thumb)

undefined4 sub_0803C198(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x03') {
    if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_080032EC(0x19);
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_083386cc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


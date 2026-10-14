// sub_080375D8 at 0x080375D8 (thumb)

undefined4 sub_080375D8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fdc4 + (uint)*(byte *)(param_1 + 0x101) * 4));
  }
  else {
    sub_0801CFC8(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


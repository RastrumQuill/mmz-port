// sub_080366D8 at 0x080366D8 (thumb)

undefined4 sub_080366D8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fd0c + (uint)*(byte *)(param_1 + 0x101) * 4));
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


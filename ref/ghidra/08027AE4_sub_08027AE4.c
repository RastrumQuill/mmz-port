// sub_08027AE4 at 0x08027AE4 (thumb)

undefined4 sub_08027AE4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xbf) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 1;
    if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\x01') {
      sub_08025C54(param_1,0x1302);
    }
    else {
      sub_08025C54(param_1,0x1303);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}


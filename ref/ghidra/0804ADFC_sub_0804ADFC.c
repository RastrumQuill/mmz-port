// sub_0804ADFC at 0x0804ADFC (thumb)

undefined4 sub_0804ADFC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08048A54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082aef10,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x804b4cd;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082aedf8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  if (*(char *)(param_1 + 0x10) == '\x04') {
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_080033F0(param_1 + 0x6c,0xd);
    if (*(char *)(param_1 + 0x10) == '\x04') goto LAB_0804ae8c;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
LAB_0804ae8c:
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0804AEC0(param_1);
  return in_lr;
}


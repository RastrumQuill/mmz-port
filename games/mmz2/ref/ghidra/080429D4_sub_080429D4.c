// sub_080429D4 at 0x080429D4 (thumb)

undefined4 sub_080429D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa315);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0xa300);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4);
    if ((*(char *)(iVar1 + 0xd) == '\x02') && (*(char *)(*(int *)(param_1 + 200) + 0xd) == '\x02'))
    {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar1 + 9)] + 0xc);
      iVar1 = *(int *)(param_1 + 200);
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar1 + 9)] + 0xc);
      sub_080B4A68(param_1,param_1 + 0x54,3,0);
      sub_080B4A68(param_1,param_1 + 0x54,3,1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


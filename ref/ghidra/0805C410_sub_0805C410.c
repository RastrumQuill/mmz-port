// sub_0805C410 at 0x0805C410 (thumb)

undefined4 sub_0805C410(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar1 = (uint)DAT_02022ae0;
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (1 < *(byte *)(iVar2 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x90) = uVar1 & 0x10;
      *(char *)(param_1 + 0x94) = (char)(uVar1 & 0x10);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0800561C(param_1 + 0x74,&DAT_082aff1c);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


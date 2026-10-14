// sub_080AE570 at 0x080AE570 (thumb)

undefined4 sub_080AE570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar1 = param_1 + 0x54;
        sub_080AE358(uVar2,iVar1,1,0x30);
        sub_080AE358(uVar2,iVar1,1,0x40);
        sub_080AE358(uVar2,iVar1,1,0x50);
      }
      else if (*(char *)(param_1 + 0x11) == '\x01') {
        iVar1 = param_1 + 0x54;
        sub_080AE358(uVar2,iVar1,1,0xf0);
        sub_080AE358(uVar2,iVar1,1,0);
        sub_080AE358(uVar2,iVar1,1,0x10);
      }
      else {
        iVar1 = param_1 + 0x54;
        sub_080AE358(uVar2,iVar1,1,0xb0);
        sub_080AE358(uVar2,iVar1,1,0xc0);
        sub_080AE358(uVar2,iVar1,1,0xd0);
      }
    }
    else {
      iVar1 = param_1 + 0x54;
      sub_080AE358(uVar2,iVar1,1,0x70);
      sub_080AE358(uVar2,iVar1,1,0x80);
      sub_080AE358(uVar2,iVar1,1,0x90);
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_0801CF00(param_1,0xd502);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


// sub_08067074 at 0x08067074 (thumb)

undefined4 sub_08067074(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  bVar1 = DAT_02022ae0 & 0x10;
  if ((DAT_02022ae0 & 0x10) == 0) {
    puVar4 = (uint *)(param_1 + 0x90);
    uVar2 = *(ushort *)puVar4 & 0x40;
    if ((*(ushort *)puVar4 & 0x40) == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if ((*(char *)(param_1 + 0x11) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)))
        {
          if (*(char *)(param_1 + 0xd) != '\t') {
            *(undefined *)(param_1 + 0xd) = 5;
            *(undefined *)(param_1 + 0xe) = 1;
          }
          *(undefined *)(param_1 + 0x11) = 1;
        }
        if (((*(ushort *)puVar4 & 1) != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
          iVar3 = sub_08015A64(0,param_1,&DAT_082b0c30);
          *(int *)(param_1 + 0xc0) = iVar3;
          if (iVar3 != 0) {
            *(undefined *)(param_1 + 0xd) = 9;
            *(undefined *)(param_1 + 0xe) = 1;
          }
        }
        iVar3 = sub_08048BE8(param_1);
        if (iVar3 != 0) {
          return in_lr;
        }
        sub_080C8A98(param_1,*(undefined4 *)(&UNK_082b0ba0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
      if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
        iVar3 = sub_08048BE8();
        if (iVar3 != 0) {
          return in_lr;
        }
        sub_08067B68(param_1);
        return in_lr;
      }
      if (*(char *)(*(int *)(param_1 + 0x20) + 199) == '\0') goto LAB_08067144;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *puVar4 = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xf) = *(undefined *)(*(int *)(param_1 + 0x20) + 0xc5);
      *(undefined *)(param_1 + 0x12) = 0x80;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(byte *)(param_1 + 0xd) = bVar1;
    }
    sub_080671AC(param_1);
  }
  else {
LAB_08067144:
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


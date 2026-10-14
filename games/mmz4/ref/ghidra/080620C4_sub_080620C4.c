// sub_080620C4 at 0x080620C4 (thumb)

undefined4 sub_080620C4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb5) = 0;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x48);
  }
  iVar3 = *(int *)(param_1 + 0xc4);
  if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
    *(int *)(param_1 + 0xc4) = 0;
  }
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((((*puVar4 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar4 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    sub_08065560(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_080621c2:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080621d4;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if (((0xc < *(byte *)(param_1 + 0xd)) || (*(byte *)(param_1 + 0xd) < 0xb)) &&
       ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      sub_08066544(param_1);
    }
    if (*(char *)(param_1 + 0xd) == '\x04') {
      if (*(char *)(param_1 + 0xcf) == '\0') goto LAB_080621b8;
      *(undefined *)(param_1 + 0xce) = 0;
      uVar2 = 0xc;
    }
    else {
      if (*(char *)(param_1 + 0xd) != '\n') goto LAB_080621c2;
LAB_080621b8:
      uVar2 = 0xb;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    goto LAB_080621c2;
  }
  iVar3 = sub_0802B3CC();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080621d4:
  sub_08128884(param_1,*(undefined4 *)(&DAT_088575a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined *)(param_1 + 0xcf) = 0;
  return in_lr;
}


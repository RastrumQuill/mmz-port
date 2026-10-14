// sub_08039FE4 at 0x08039FE4 (thumb)

undefined8 sub_08039FE4(int param_1,undefined *param_2)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 600) & 0x20000) != 0) &&
     ((2 < *(byte *)(param_1 + 0xc0) || (2 < *(byte *)(param_1 + 0xc1))))) {
    if (param_2 != (undefined *)0x0) {
      uVar2 = 5;
LAB_0803a0aa:
      *param_2 = uVar2;
    }
LAB_0803a0ac:
    uVar3 = 1;
    goto LAB_0803a0ea;
  }
  puVar4 = (uint *)(param_1 + 600);
  if ((*puVar4 & 0x1000) == 0) {
LAB_0803a054:
    if (*(char *)(param_1 + 0xc0) == '\x04') goto LAB_0803a05a;
  }
  else {
    if (*(byte *)(param_1 + 0xc0) != 4) {
      cVar1 = sub_08128884(param_1,*(undefined4 *)
                                    (&DAT_088500f8 + (uint)*(byte *)(param_1 + 0xc0) * 4));
      if (cVar1 != '\0') {
        if (param_2 != (undefined *)0x0) {
          uVar2 = *(undefined *)(param_1 + 0xc0);
          goto LAB_0803a0aa;
        }
        goto LAB_0803a0ac;
      }
      goto LAB_0803a054;
    }
LAB_0803a05a:
    if (((*puVar4 & 0x2000) != 0) && ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0)) {
      *(undefined *)(param_1 + 0x167) = 1;
    }
  }
  if ((*puVar4 & 0x4000) == 0) {
LAB_0803a0bc:
    if (*(char *)(param_1 + 0xc1) == '\x04') goto LAB_0803a0c2;
  }
  else {
    if (*(byte *)(param_1 + 0xc1) != 4) {
      cVar1 = sub_08128884(param_1,*(undefined4 *)
                                    (&DAT_088500f8 + (uint)*(byte *)(param_1 + 0xc1) * 4));
      if (cVar1 != '\0') {
        if (param_2 != (undefined *)0x0) {
          uVar2 = *(undefined *)(param_1 + 0xc1);
          goto LAB_0803a0aa;
        }
        goto LAB_0803a0ac;
      }
      goto LAB_0803a0bc;
    }
LAB_0803a0c2:
    if (((*puVar4 & 0x8000) != 0) && ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0)) {
      *(byte *)(param_1 + 0x167) = *(byte *)(param_1 + 0x167) ^ 1;
    }
  }
  uVar3 = 0;
LAB_0803a0ea:
  return CONCAT44(in_lr,uVar3);
}


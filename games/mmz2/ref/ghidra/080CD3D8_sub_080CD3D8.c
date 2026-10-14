// sub_080CD3D8 at 0x080CD3D8 (thumb)

undefined4 sub_080CD3D8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    uVar2 = 0x6f01;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 0x6f02;
  }
  else {
    if (cVar1 != '\x02') {
      sub_080127E4(param_1,0x6f03);
      goto LAB_080cd424;
    }
    uVar2 = 0x6f04;
  }
  sub_080127E4(param_1,uVar2);
LAB_080cd424:
  sub_080128D4(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08349578;
  *(undefined2 *)(param_1 + 0x26) = 0x2401;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0x10) & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CD4A0(param_1);
  return in_lr;
}


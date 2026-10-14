// sub_080713C4 at 0x080713C4 (thumb)

undefined4 sub_080713C4(int param_1,char param_2,char param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if (param_2 == '\x01') {
    if (param_3 == '\0') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_0833ee98;
      uVar1 = 0x3e01;
      goto LAB_0807143a;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &DAT_0833ee98;
  }
  else {
    if (param_2 != '\x02') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      return in_lr;
    }
    if (param_3 == '\0') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_0833eea0;
      uVar1 = 0x3e01;
      goto LAB_0807143a;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &DAT_0833eea0;
  }
  *(undefined **)(param_1 + 0x30) = puVar2;
  uVar1 = 0x2e01;
LAB_0807143a:
  *(undefined2 *)(param_1 + 0x26) = uVar1;
  return in_lr;
}


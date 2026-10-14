// sub_080ED338 at 0x080ED338 (thumb)

undefined4 sub_080ED338(undefined4 param_1,int param_2)

{
  uint3 *puVar1;
  int extraout_r1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined8 uVar5;
  
  pcVar2 = *(char **)(param_2 + 0x40);
  if (*pcVar2 == '\0') {
    *(char **)(param_2 + 0x40) = pcVar2 + 1;
  }
  else {
    uVar4 = *(byte *)(param_2 + 3) + 1;
    *(char *)(param_2 + 3) = (char)uVar4;
    uVar3 = uVar4;
    sub_080ED2DC();
    param_2 = extraout_r1;
    if (uVar4 <= uVar3) {
      *(undefined *)(extraout_r1 + 3) = 0;
      *(char **)(extraout_r1 + 0x40) = pcVar2 + 5;
      return in_lr;
    }
  }
  puVar1 = (uint3 *)(*(int *)(param_2 + 0x40) + 1);
  uVar3 = (uint)*(byte *)puVar1;
  uVar5 = sub_080ED2C0((uint)*puVar1 << 8);
  *(uint *)((int)((ulonglong)uVar5 >> 0x20) + 0x40) = (uint)uVar5 | uVar3;
  return in_lr;
}


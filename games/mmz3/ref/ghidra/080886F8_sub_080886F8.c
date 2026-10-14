// sub_080886F8 at 0x080886F8 (thumb)

undefined8 sub_080886F8(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)sub_08012BFC(param_1 + 0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb8) = *puVar1;
    *(undefined4 *)(param_1 + 0xbc) = puVar1[1];
  }
  return CONCAT44(in_lr,(uint)(puVar1 != (undefined4 *)0x0));
}


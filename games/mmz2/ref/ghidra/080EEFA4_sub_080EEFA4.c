// sub_080EEFA4 at 0x080EEFA4 (thumb)

undefined4 sub_080EEFA4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined4 in_lr;
  undefined2 local_90;
  undefined4 uStack_4;
  
  puVar3 = &local_90;
  uVar1 = DAT_04000204;
  DAT_04000204 = uVar1 & 0xfffc | 3;
  pcVar4 = sub_080EEF80;
  uStack_4 = in_lr;
  for (uVar2 = 0x120000; uVar2 >> 0x10 != 0; uVar2 = ((uVar2 >> 0x10) - 1) * 0x10000) {
    *puVar3 = *(undefined2 *)pcVar4;
    pcVar4 = (code *)((int)pcVar4 + 2);
    puVar3 = puVar3 + 1;
  }
  sub_080EF120(param_1,param_2,param_3,(int)&local_90 + 1);
  return uStack_4;
}

